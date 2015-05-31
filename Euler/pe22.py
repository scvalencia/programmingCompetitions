import string

def handle_file():
	file_object = open('pe22_names.txt', 'r')
	names = [_.split(',') for _ in file_object]
	return sorted([str(_).replace('"', '') for _ in names[0]])

def solve(names):
	ans = 0
	alpha_index = {alpha : i + 1 for i, alpha in enumerate(string.ascii_uppercase)}
	get_score = lambda x: sum([alpha_index[_] for _ in x])

	for i, name in enumerate(names):
		i = i + 1
		ans += (i * get_score(name))
	return ans

if __name__ == '__main__':
	names = handle_file()
	print solve(names)