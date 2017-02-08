let rec iter n = match n with
    | 0 -> ()
    | _ -> (print_string "Hello World"; print_newline ()); iter (n - 1)
 
let _ = iter (read_int ())