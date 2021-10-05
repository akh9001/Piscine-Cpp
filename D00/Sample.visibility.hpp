/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.visibility.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:43:29 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/05 14:02:37 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_VISIBILITY_HPP
# define SAMPLE_VISIBILITY_HPP
# include <iostream>

class Visibility
{
public:
	
	int		publicfoo;
		
	Visibility(void);
	~Visibility(void);

	void	publicBar(void);
	void	setPrivateFoo(int v);
	int		getPrivateFoo(void) const;
	int		compare(Visibility * other) const;

private:

	int		_privateFoo;
	
	void	_privateBar(void) const;
};

#endif