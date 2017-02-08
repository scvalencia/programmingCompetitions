let rec make_array n = match n with
	| 0	-> []
	| _ -> 1::(make_array (n - 1))

let _ =
    let n = int_of_string (read_line ()) in
    let arr = make_array n in
    List.iter ( Printf.printf "%d " ) arr