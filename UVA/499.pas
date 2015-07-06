program UVA499(input, output);
	var
		i, max, rpr : integer;
		line : string;
		letters : array[0 .. 52] of integer;

	function equivalent(ch : char) : integer;
		var
			ascii, ans : integer;
	begin
		ascii := ord(ch);
		ans := -1;
		if ascii in [65 .. 91] then
			ans := ascii - 64
		else if ascii in [97 .. 122] then
			ans := (ascii - 97) + 26;
		equivalent := ans;		 	
	end;

	function reverse(number : integer) : char;
	begin
		if number in [0 .. 25] then
			reverse := chr(number + 64r)
		else if number in [26 .. 51] then
			reverse := chr(number + 71)		 	
	end;

begin

	while not eof do begin
		readln(line);
		max := -1;
		for i := 0 to 52 do
			letters[i] := 0; 

		for i := 1 to length(line) do begin
			rpr := equivalent(line[i]);
			if rpr > -1 then begin
				letters[rpr] := letters[rpr] + 1;
				if(letters[rpr] > max) then
					max := letters[rpr];				
			end						
		end;
		for i := 0 to 52 do
			if letters[i] = max then
				write(reverse(i));

		writeln(' ', max);
	end;
	 	
end.