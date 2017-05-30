/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jswanepo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 16:55:00 by jswanepo          #+#    #+#             */
/*   Updated: 2017/05/28 16:55:01 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Object.hpp"
#include <iostream>
#include <curses.h>

Object::Object()
{

}

Object::Object(int row, int col, char ch) :
                    _row(row),
                    _col(col),
                    _char(ch)
{
    mvaddch(row, col, ch);
}

Object::Object(Object const & f)
{
    *this = f;
}

Object::~Object()
{
    
}

Object  Object::operator=(Object const & f)
{
    this->_char = f._char;
    return (*this);
}

int     Object::getRow()
{
    return (this->_row);
}

int     Object::getCol()
{
    return (this->_col);
}

char    Object::getChar()
{
    return (this->_char);
}

void    Object::setRow(int row)
{
    this->_row = row;
}

void    Object::setCol(int col)
{
    this->_col = col;
}

void    Object::move(int row, int col)
{
    mvaddch(this->_row, this->_col, ' ');
    this->_row = row;
    this->_col = col;
    mvaddch(row, col, this->_char);
    refresh();
}
