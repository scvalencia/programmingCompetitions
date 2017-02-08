(* Write a function that returns the last element of a list *)

let rec last xs = match xs with
	| []	 -> None
	| [x]	 -> Some x
	| _::xs' -> last xs'

(* Find the last but one (last and penultimate) elements of a list *)

let rec last_two xs = match xs with
	| []		-> None
	| x::x'::[] -> Some (x, x')
	| x::xs'	-> last_two xs'

(* Find the k'th element of a list *)

let kth k xs =
	let rec aux i xs = match i, xs with
		| i', []			   -> None
		| i', x::_ when i' = k -> Some x
		| _, x::xs'		       -> aux (i + 1) xs'
	in aux 1 xs

(* Find the number of elements of a list *)

let rec length = function
	| []	 -> 0
	| _::xs' -> 1 + length xs'

(* Reverse a list *)

let rec reverse xs =
	let rec aux xs acc = match xs with
		| []     -> acc
		| x::xs' -> aux xs' (x::acc)
	in aux xs []

(* Find out whether a list is a palindrome *)

let palindrome xs =

	let rec aux i j = match i, j with
		| _, _ when i >= j -> true
		| i', j' 		   -> 
			if (List.nth xs i = List.nth xs j) then aux (i + 1) (j - 1) 
			else false
		
	in aux 0 (List.length xs - 1)

let palindrome' xs = xs = reverse xs

(* Flatten a nested list structure *)

type 'a node = One of 'a | Many of 'a node list

let rec flatten xs = 

	let rec aux = function
		| One x        -> x
		| Many (x::xs) -> aux x :: flatten xs

	in 
		match xs with
			| [] -> []
			| x::xs' -> aux 