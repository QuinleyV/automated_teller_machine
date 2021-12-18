class ATM 
{
	

	public: 
		double getBalance();
		void setBalance(double);
		void setWithdraw(double);
		void setDeposit(double);
		double deposit();
		double withdrawMenu();
		void mainMenu(int&);
		ATM();
		
	private:
		int balance;



};
