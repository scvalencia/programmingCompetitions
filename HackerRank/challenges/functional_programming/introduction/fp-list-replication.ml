let rec read_lines () =
    try let line = read_line () in
        int_of_string (line) :: read_lines()
    with
        End_of_file -> []

let rec replicate n xs = 
	let rec aux n x = match n with
		| 0 -> []
		| _ -> x::(aux (n - 1) x)
	in match xs with
		| []	 -> []
		| x::xs' -> (aux n x) @ (replicate n xs')

let () =
    let n::arr = read_lines() in
    let ans = replicate n arr in
    List.iter (fun x -> print_int x; print_newline ()) ans
