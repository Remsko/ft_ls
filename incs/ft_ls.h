/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:28:28 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/14 10:26:31 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include "dirent.h"
# include "pwd.h"
# include "grp.h"
# include "time.h"
# include "sys/xattr.h"
# include "sys/acl.h"
# include "libft.h"
# include "liblst.h"
# include "libbuf.h"
# include "types.h"
# include "proto.h"

# define SEC_6_MONTHS 15778800

# define FLAG_L 0x1
# define FLAG_BIGR 0x2
# define FLAG_A 0x4
# define FLAG_R 0x8
# define FLAG_T 0x10
# define FLAG_BIGA 0x20
# define FLAG_D 0x40
# define FLAG_G 0x80
# define FLAG_O 0x100
# define FLAG_P 0x200
# define FLAG_F 0x400
# define FLAG_BIGS 0x800
# define FLAG_C 0x1000

# define UTILS_ARGS 0x1
# define UTILS_PRINT 0x2

#endif
