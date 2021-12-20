#pragma once
namespace CompteBancaire
{
	class Date
	{
	private: 
		int jour;
		int	mois;
		int	annee;
	public:
		Date();
		void date_Aujourdhui() const;
	};
};


