/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:28:28 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/11 11:53:25 by rpinoit          ###   ########.fr       */
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
# include "types.h"
# include "proto.h"
#   include <stdio.h>

# define SEC_6_MONTHS 15778800

# define FLAG_l (1)
# define FLAG_R (1 << 1)
# define FLAG_a (1 << 2)
# define FLAG_r (1 << 3)
# define FLAG_t (1 << 4)

//# define UTILS_NO_R (1)
//# define UTILS_PATH (1 << 1)
//# define UTILS_NL (1 << 2)

#endif
