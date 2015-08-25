program p1004(input, output);
	var
		counter : integer;
		input, output, aux : real;

begin
	counter := 0;
	output := 0.0;

	while counter < 12 do begin
		read(input);
		output := output + input;
		counter := counter + 1;
	end;

	output := output / 12;
	writeln('$',output:4:2);
end.