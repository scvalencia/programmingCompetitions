program p010104(input, output);
	var
		a, n, k, b, c : integer;

begin
	write('a: ');
	read(a);
	write('n: ');
	read(n);

	k := n; b := 1; c := a;

	while k <> 0 do begin
		if k mod 2 = 0 then begin
			k := k div 2;
			c := c * c;
		end else begin
			k := k - 1;
			b := b * c;
			
		end;
	end;

	writeln('a^n: ', b);
end.