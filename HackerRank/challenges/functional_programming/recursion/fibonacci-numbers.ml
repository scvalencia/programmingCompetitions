let memoize bound = 

	let rec aux a b i fib = 
		if i = bound then fib
		else aux b (a + b) (i + 1) (a::fib)

	in List.rev (aux 0 1 0 [])

let fibonacci n = 
	let fib = memoize 45 in
	List.nth fib (n - 1)

let () =
	let n = int_of_string (read_line ()) in
	print_string (string_of_int (fibonacci n)); print_newline () 