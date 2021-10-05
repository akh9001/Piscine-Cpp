/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:37:17 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/04 19:43:49 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_CLASS_H
# define SAMPLE1_CLASS_H
# include <iostream>

//Declaration de la classe & fonction, attributs

class Sample1
{
	public:
	
		char	a1; //Attribut membre
		int		a2; //Attribut membre
		float	a3; //Attribut membre
	
		Sample1(char p1, int p2, float p3); //Constucteur
		~Sample1(void);//Descructeur
		void	bar(void);
};
#endif