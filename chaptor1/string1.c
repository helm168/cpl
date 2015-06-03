void reverse1(char s[]) {
	int len, i, center;
	i = 0;
	len = 0;
	while(s[len] != '\0') {
		len++;
	}
	center = len / 2;
	char c;
	for(i = 0; i < center; i++) {
		c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
} 
