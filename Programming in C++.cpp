unsigned NOD(unsigned num1, unsigned num2) {

	if (num2 != 1 && num2 != 0) {
		return NOD(num2, num1 % num2);
	}
	else if (num2 == 0)
		return num1;
	else
		return 1;
}

unsigned gcd(unsigned num1, unsigned num2) {
	if (num1 < num2) {
		if (num1 == 0)
			return num2;

		else return NOD(num2, num1);
	}
	else {
		if (num2 == 0)
			return num1;
		else return NOD(num1, num2);
	}
}