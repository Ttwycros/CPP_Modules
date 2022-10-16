#pragma once

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain {
	public:
		Brain(void);
		Brain(const Brain	&other);
		~Brain(void);
		Brain	&operator=(const Brain	&other);
		std::string const &getIdea(int index) const;
	// private:
		std::string ideas[100];
};

#endif