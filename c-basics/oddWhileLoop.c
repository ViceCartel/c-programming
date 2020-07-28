/* an odd loop using while loop */
main()
{
  char another = 'y';
  int num;

  while (another == 'y')
  {
    printf("Enter a number.\n");
    scanf("%d", &num);
    printf("The square of %d is %d.", num, num * num);
    printf("Want to try again? y/n   ");
    scanf(" %c",&another);    
  }
}
