int power(int x, unsigned p) {
	int answer = 1;
	if (p > 0) {
		for (int i = 0; static_cast<unsigned int>(i) < p; ++i)
		{
			answer *= x;
		}
		return answer;
	}
	return answer;
}