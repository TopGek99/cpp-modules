#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <iostream>

class Bureaucrat {
	private:
		std::string const name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat &old);
		Bureaucrat &operator=(Bureaucrat &old);
		std::string getName(void) const;
		int getGrade(void);
		void incrementGrade(void);
		void decrementGrade(void);
		~Bureaucrat();
};

#endif