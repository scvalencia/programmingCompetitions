let rec read_lines () =
    try let line = read_line () in
        int_of_string (line) :: read_lines()
    with
        End_of_file -> []

let rec update = function
    | []     -> []
    | x::xs' -> (abs x) :: update xs'

let () =
    let xs = read_lines() in
    let ans = update xs in
    List.iter (fun x -> print_int x; print_newline ()) ans