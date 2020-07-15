/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nodywili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:28:10 by nodywili          #+#    #+#             */
/*   Updated: 2020/07/15 15:38:09 by nodywili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c);

void rush(int x, int y){
		
				int row;
				int column;

				 row = 0;
				 column = 0;

				while(row < y ){
					while(column < x){
								 if((column == 0  || row == 0) && (column == (x-1) ||row == (y -1)))
								 {
								 				ft_putchar('\\');
								 }
								 else if(( row == 0 || column == (x-1)) && (column == 0 || row == (y-1)))
								 {
								 				ft_putchar('/');
								 }
								 else if(row == 0 || row ==  (y -1))
								 {
								 				ft_putchar('*');
											
								 }
								 else if(column == 0 || column ==  (x-1))
								 {
								 				ft_putchar('*');
											
								 }
								 else
								 {
								 			ft_putchar(' ');
								 }
								 column++;
								 
				}
					column = 0;
					ft_putchar('\n');
					row++;
}
}
