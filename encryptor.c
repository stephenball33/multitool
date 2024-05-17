

void encryptor()
{
	char filename[40];
	int key;

	printf("Please provide the file you'd like to encrypt:\n");
	scanf_s("%c", &filename);

	printf("\nPlease provide a 3-digit encyption key:\n");
	scanf_s("%i", &key);

	fopen(filename, "w");


}