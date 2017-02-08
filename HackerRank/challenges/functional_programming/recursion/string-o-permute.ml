let input () =
	let xs = ref [] in
	let tc = int_of_string (read_line ()) in

	for i = 1 to tc do
		let ss = read_line () in
		xs := ss :: !xs
	done;

	!xs

let explode str =
	let size = String.length str in
	let rec aux idx acc = match idx with
		| -1 -> acc
		| _ -> aux (idx - 1) ((String.get str idx) :: acc)
	in aux (size - 1) []

let implode l =
  	let res = String.create (List.length l) in
  	let rec imp i = function
  		| [] -> res
  		| c::l -> res.[i] <- c; imp (i + 1) l in
  	let _ = imp 0 l in
  	res

let rec swap = function 
	| x::x'::xs -> x'::x::(swap xs)
	| _			-> []

(*)
let () = 
	let xs = input () in
	let parse = swap xs in 

	let aux = function
		| x::xs'	
		| []
	List.iter (fun x -> print_string x; print_newline ()) (explode parse)
*)