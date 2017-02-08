let rec read_lines () =
    try let line = read_line () in
        int_of_string (line) :: read_lines()
    with
        End_of_file -> []

let summ_of_odd xs =
    let odd = (fun x -> x mod 2 <> 0) in
    let rec aux xs acc = match xs with
        | []      -> acc
        | x::xs'  -> if odd x then aux xs' (x + acc) else aux xs' acc
    in aux xs 0

let () =
    let xs = read_lines() in
    let ans = summ_of_odd xs in
    print_int ans