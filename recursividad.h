class Recursividad{
	public:
		int factorial(int n){
			if(n==0)
				return 1;
			else
				return n*factorial(n-1);
		}

		int suma(int n){
		if(n==0)
			return 0;
		else
			return n+suma(n-1);
		}
};
