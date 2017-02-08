let gdc a b = 

	let rec gcd' a b = match (a, b) with
		| (a, b) when a = b	-> a
		| _					-> gcd' (a - b) b

	in gcd' a b

let () =
	let n, m = ref 0, ref 0 in
	let _ = Scanf.scanf "%i %i\n" (fun x y -> n := x; m := y) in
	print_int (gdc !n !m); print_newline ()