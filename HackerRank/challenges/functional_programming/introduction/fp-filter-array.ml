let rec read_lines () =
    try let line = read_line () in
        int_of_string (line) :: read_lines()
    with
        End_of_file -> []

let filter b xs =
	let f = (fun x -> x < b) in
	let rec aux xs = match xs with
		| []     -> []
		| x::xs' -> if f x then x::(aux xs') else aux xs'
	in aux xs

let _ =
    let n::arr = read_lines() in
    List.iter (fun x -> print_int x; print_newline ()) (filter n arr)