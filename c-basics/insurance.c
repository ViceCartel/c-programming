main()
{
  char sex,ms;
  int age;

  printf("Are you Male or Female   M/F.\n");
  scanf("%c", &sex);
  printf("How old are you?\n");
  scanf("%d", &age);
  printf("Marital status?  M if Married U if unmarried\n");
  scanf(" %c", &ms);
  if ((ms == 'M') || (ms == 'U' && sex == 'M' && age > 30) || (ms == 'U' && sex == 'F' && age > 25))
    printf("\nYou are insured.\n");
  else
    printf("\nSorry... You are not insured.\n");
}
