/******************************************************************************
    mkid:  make a unique id for a process.
    Copyright (C) 2013 Wang Bin <wbsecg1@gmail.com>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
******************************************************************************/

// initialized on program startup

//{anonymous}:: cannot appear in a constant-expression
namespace { //ensure the class is unique in different units

template<int N> struct mkid {
    static void id() {}
    static long long value;
};
template<int N> long long mkid<N>::value = (&(mkid<N>::id)); //‘&’ cannot appear in a constant-expression

}

#define MKID (long long)((mkid<__LINE__>::id))

