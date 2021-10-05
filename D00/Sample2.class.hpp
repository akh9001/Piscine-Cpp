/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:51:23 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/04 20:20:32 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE2_CLASS_H
# define SAMPLE2_CLASS_H
# include <iostream>

//Declaration de la classe & fonction, attributs

class Sample2
{
	public:
	
		char	a1; //Attribut membre
		int		a2; //Attribut membre
		float	a3; //Attribut membre
	
		Sample2(char p1, int p2, float p3); //Constucteur
		~Sample2(void);//Descructeur
		void	bar(void);
};

#endif