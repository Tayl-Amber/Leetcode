int mySqrmySqrtt(int x) {

  if ( x == 0 || x == 1){
    return x;
  }
  
  unsigned long int result = 1;
  while (result * result <= x)
  {
    result++;
  }
  return result - 1;
}
