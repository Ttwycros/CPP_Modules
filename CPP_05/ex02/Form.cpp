#include "Form.hpp"

Form :: Form(void) : flag(false), name(""), gradeSign(150), gradeExec(150) {
	std :: cout << "Form: default constructor called" << std :: endl;
}

Form :: Form(std :: string name, int gradeSign, int gradeExec) 
	: flag(false), name(name), gradeSign(gradeSign), gradeExec(gradeExec) {
	std :: cout << "Form: Initialisation constructor called" << std :: endl;
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
}

Form :: Form(const Form &other) : name(other.getName()), gradeSign(other.getGradeSign()), gradeExec(other.getGradeExec()){
	*this = other;
	std :: cout << "Form: Initialisation constructor called" << std :: endl;
}

Form :: ~Form(void) {
	std :: cout << "Form: Destructor called" << std :: endl;
}

Form	&Form :: operator=(const Form &other) {
	if (this != &other)
		flag = other.getFlag();
	std :: cout << "Form: Assignation operator called" << std :: endl;
	return *this;
}

std :: string const	&Form :: getName(void) const {
	return name;
}

int	Form :: getGradeExec(void) const {
	return gradeExec;
}

int	Form :: getGradeSign(void) const {
	return gradeSign;
}

bool	Form :: getFlag(void) const {
	return flag;
}

void	Form :: beSigned(const Bureaucrat	&b) {
	if (flag)
		throw isSigned();
	if (b.getGrade() <= gradeExec && b.getGrade() <= gradeSign)
		flag = true;
	else if (b.getGrade() > gradeSign)
		throw GradeTooLowException();
}

const char *Form :: GradeTooLowException :: what() const throw() {
	return "Forming failed, too low grade";
}

const char *Form :: GradeTooHighException :: what() const throw() {
	return "Forming failed, too high grade";
}

const char *Form :: isSigned :: what() const throw() {
	return "This form is already signed";
}

std :: ostream	&operator<<(std :: ostream &stream, const Form &other) {
	stream << "Form " << other.getName() << "has grade to execute " << other.getGradeExec() << " and grade to sign " 
		<< other.getGradeSign() << ". Status of sign: " << other.getFlag() << std :: endl;
	return stream;
}
