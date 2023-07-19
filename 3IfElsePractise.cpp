#include <iostream>
#include <cmath>
#include <list>
using namespace std;


int main() {

	float mathcorrect;
	float mathfalse;

	float turkishcorrect;
	float turkishfalse;

	float fencorrect;
	float fenfalse;

	float socialcorrect;
	float socialfalse;

	string branch;
	string mf1 = "MF";
	string mf2 = "mf";
	string tm1 = "TM";
	string tm2 = "tm";
	string ts1 = "TS";
	string ts2 = "ts";
	string situation;

	cout << "\n\n			Enter Your Branch(MF, TM, TS)\n" << endl
		<< "			\(Shortening Information\n			MF : Math & Seince\n			TM : Turkish & Math\n			TS : Turkish & Social\)\n"
		<< "			:";
	cin >> branch;



	if (branch == mf1)
	{
		situation = "			So, I Guess There is an Einstein Here\n\n";

	}
	else if (branch == mf2)
	{
		situation = "			So, I Guess There is an Einstein Here\n\n";

	}
	else if (branch == tm1)
	{
		situation = "			So, We Have a Tolstoy Here\n\n";

	}
	else if (branch == tm2)
	{
		situation = "			So, We Have a Tolstoy Here\n\n";

	}
	else if (branch == ts1)
	{
		situation = "			So, You Are a Coward to Study to Math and also to Being Unemployed\n\n";

	}
	else if (branch == ts2)
	{
		situation = "			So, You Are a Coward to Study to Math and also to Being Unemployed\n\n";

	}
	else
	{
		cout << "			There isn't a branch as this. Enter again\n\n\n" << "			:";

		cin >> branch;



		if (branch == mf1)
		{
			situation = "			So, I Guess There is an Einstein Here\n\n";

		}
		else if (branch == mf2)
		{
			situation = "			So, I Guess There is an Einstein Here\n\n";

		}
		else if (branch == tm1)
		{
			situation = "			So, We Have a Tolstoy Here\n\n";

		}
		else if (branch == tm2)
		{
			situation = "			So, We Have a Tolstoy Here\n\n";

		}
		else if (branch == ts1)
		{
			situation = "			So, You Are a Coward to Study to Math and also to Being Unemployed\n\n";

		}
		else if (branch == ts2)
		{
			situation = "			So, You Are a Coward to Study to Math and also to Being Unemployed\n\n";

		}
		else
		{
			cout << "			There isn't a branch as this. Enter again\n\n\n" << "			:";

			cin >> branch;



			if (branch == mf1)
			{
				situation = "			So, I Guess There is an Einstein Here\n\n";

			}
			else if (branch == mf2)
			{
				situation = "			So, I Guess There is an Einstein Here\n\n";

			}
			else if (branch == tm1)
			{
				situation = "			So, We Have a Tolstoy Here\n\n";

			}
			else if (branch == tm2)
			{

				situation = "			So, We Have a Tolstoy Here\n\n";

			}
			else if (branch == ts1)
			{
				situation = "			So, You Are a Coward to Study to Math and also to Being Unemployed\n\n";

			}
			else if (branch == ts2)
			{
				situation = "			So, You Are a Coward to Study to Math and also to Being Unemployed\n\n";

			}
			else
			{

				cout << "			There isn't a branch as this. Enter again for last\n\n\n" << "			:";

				cin >> branch;



				if (branch == mf1)
				{
					situation = "			Why The Duck It Takes So Ducking Long You Idiot. Don't You Know Your Branch. Anyway\n\n";

				}
				else if (branch == mf2)
				{
					situation = "			Why The Duck It Takes So Ducking Long You Idiot. Don't You Know Your Branch. Anyway\n\n";

				}
				else if (branch == tm1)
				{
					situation = "			Why The Duck It Takes So Ducking Long You Idiot. Don't You Know Your Branch. Anyway\n\n";

				}
				else if (branch == tm2)
				{
					situation = "			Why The Duck It Takes So Ducking Long You Idiot. Don't You Know Your Branch. Anyway\n\n";

				}
				else if (branch == ts1)
				{
					situation = "			Why The Duck It Takes So Ducking Long You Idiot. Don't You Know Your Branch. Anyway\n\n";

				}
				else if (branch == ts2)
				{
					situation = "			Why The Duck It Takes So Ducking Long You Idiot. Don't You Know Your Branch. Anyway\n\n";

				}
				else
				{
					cout << "			These are wrong, what the Duck do you want dude.\n" << "			:";
					return 0;
				}
				cout << "			Finally Bro\n";

			}
			
		}	
				
	}
	cout << situation << "			:";




	cout << "Enter Your Number of Correct Answers \; ";
	cout << "\n			Math : ";
	cin >> mathcorrect;
	cout << "			Turkish : ";
	cin >> turkishcorrect;
	cout << "			Sience : ";
	cin >> fencorrect;
	cout << "			Social : ";
	cin >> socialcorrect;
	
	cout << "			Enter Your Number of False Answers \; ";
	cout << "\n			Math : ";
	cin >> mathfalse;
	cout << "			Turkish : ";
	cin >> turkishfalse;
	cout << "			Sience : ";
	cin >> fenfalse;
	cout << "			Social : ";
	cin >> socialfalse;

	cout << "\n\n			Calculating....\n\n" << "			Calculated" << endl << "			Here is Your Result";

	float mathnet = (mathcorrect - (mathfalse / 4 ));
	float turkishnet = (turkishcorrect - (turkishfalse / 4));
	float siencenet = (fencorrect - (fenfalse / 4));
	float socialnet = (socialcorrect - (socialfalse / 4));

	double result;


	if (branch == mf1)
	{
		result = (mathnet * 5) + (turkishnet * 3) + (siencenet * 3) + (socialnet * 1,5) ;

	}
	else if (branch == mf2)
	{
		result = (mathnet * 5) + (turkishnet * 3) + (siencenet * 3) + (socialnet * 1, 5);

	}
	else if (branch == tm1)
	{
		result = (mathnet * 3) + (turkishnet * 5) + (siencenet * 1, 5) + (socialnet * 3);

	}
	else if (branch == tm2)
	{
		result = (mathnet * 3) + (turkishnet * 5) + (siencenet * 1, 5) + (socialnet * 3);

	}
	else if (branch == ts1)
	{
		result = (mathnet * 4) + (turkishnet * 4) + (siencenet * 2, 25) + (socialnet * 2,25);

	}
	else if (branch == ts2)
	{
		result = (mathnet * 4) + (turkishnet * 4) + (siencenet * 2, 25) + (socialnet * 2, 25);

	}


	cout << "\n\n			Math : " << mathnet << "\n\n			Turkish : "
		<< turkishnet
		<< "\n\n			Sience : " << siencenet
		<< "\n\n			SOcial : " << socialnet
		<< "\n\n			YKS Total: " << result;
	
	string proposal;
	
	if (branch == mf1)
	{

		proposal = "			please don't make us laugh with thinking about medical faculty.\n";
	}
	else if (branch == mf2)
	{

		proposal = "			please don't make us laugh with thinking about medical faculty.\n";

	}
	else if (branch == tm1)
	{

		proposal = "			do you thinking law school. oh no bro don't even try you may won only a BVL.\n";

	}
	else if (branch == tm2)
	{

		proposal = "			do you thinking law school. oh no bro don't even try you may won only a BVL.\n";
	}
	else if (branch == ts1)
	{

		proposal = "			Go right now and start waitress or you'll finish radio, cinema and television and start to job 5 years later as a light.\n";
	}
	else if (branch == ts2)
	{

		proposal = "			Go right now and start waitress or you'll finish radio, cinema and television and start to job 5 years later as a light.\n";
	}

	cout << "\n\n			Our Dear Candidate\n\n " << proposal << "\n\n			OSYM Who is a Human...\n\n\n";



		return 0;
}
