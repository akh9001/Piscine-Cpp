/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:35:13 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/05 09:45:32 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H
# include <iostream>

//Declaration de la classe & fonction, attributs

class Sample
{
	public:
	
		float const pi;
		int			qd; //Attribut membre
	
		Sample(float const f); //Constucteur
		~Sample(void);//Descructeur
		void	bar(void) const;
		// La fonction membre, bar, ne modifira jamais l instance courante.
		// Autrement dit, all kind of assignation to the courant
		// instance is not allowed !
};
#endif