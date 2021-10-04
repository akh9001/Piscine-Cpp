/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:35:13 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/04 17:10:43 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H
# include <iostream>

//Declaration de la classe & fonction, attributs

class Sample
{
	public:
	
		int		foo; //Attribut membre
	
		Sample(void); //Constucteur
		~Sample(void);//Descructeur
		void	bar(void);
};
#endif