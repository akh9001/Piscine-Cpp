/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.static.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:27:47 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/05 20:31:09 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_STATIC_HPP
# define SAMPLE_STATIC_HPP
# include <iostream>

class Static
{
public:
	
	int		publicfoo;
		
	Static(void);
	~Static(void);

	static int		getNbInst(void);

private:

	static int		_nbInst;
};

#endif