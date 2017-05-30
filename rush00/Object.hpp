/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 16:55:07 by jswanepo          #+#    #+#             */
/*   Updated: 2017/05/28 16:55:09 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJECT_H
# define OBJECT_H

#include <iostream>
#include <curses.h>

class       Object
{
    protected:
        int     _row;
        int     _col;
        char    _char;
    
    public:
        Object();
        Object(int, int, char);
        Object(Object const &);
        Object operator=(Object const &);
        ~Object();
        int     getRow();
        int     getCol();
        char    getChar();
        void    setRow(int);
        void    setCol(int);
        void    move(int, int);
};

#endif
