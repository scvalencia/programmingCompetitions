program p010107(input, output);
	var
		r, q, d, a : integer;

begin
	write('a: ');
	read(a);
	write('d: ');
	read(d);

	q := 0;
	r := a;

	{Inv: a = q * d + r, 0 <= r}
	while not (r < d) do begin
		r := r - d;
		q := q + 1;
	end;

	writeln('a = q*d + r where, q: ', q, ' r: ', r);
end.