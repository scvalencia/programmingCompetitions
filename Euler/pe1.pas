program projectEuler1(input, output);
var
	bound : integer;
	i, sum : longint;
begin
	write('Bound: ');
	read(bound);
	sum := 0;
	for i := 0 to (bound - 1) do
		if (i mod 3 = 0) or (i mod 5 = 0) then
			sum := sum + i;
	writeln(sum)
end.
