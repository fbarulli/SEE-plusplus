
one = 0
while (one <= 7):
	two = one + 1
	while (two <= 8):
		three = two + 1
		while (three <= 9):
			if ((one == 7) & (two == 8) & (three == 9)):
				print(f'{one}{two}{three}')
			else:
				print(f"{one}{two}{three}")
			
			three += 1
		two = two + 1
		three = two + 1
	one = 1 + one