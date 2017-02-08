let rec read_lines () =
    try let line = read_line () in
        int_of_string (line) :: read_lines()
    with
        End_of_file -> []

let rec len = function
    | []     -> 0
    | _::xs' -> 1 + len xs'

let () =
    let xs = read_lines() in
    let ans = len xs in
    print_int ans