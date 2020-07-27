/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numofalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 11:56:18 by marvin            #+#    #+#             */
/*   Updated: 2020/02/23 11:56:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    char a[27];
    int i = 0;
    int b[27];
    int j;
    char str[101];
    scanf("%s", str);
    while (i < 26)
    {
        a[i] = 'a' + i;
        b[i] = 0;
        i++;
    }
    j = 0;
    while (str[j] != '\0')
    {
        i = 0;
        while (i < 26)
        {
            if (str[j] == a[i])
            {
                b[i] += 1;
                break ;
            }
            i++;
        }
        j++;
    }
    i = 0;
    while (i < 26)
    {
        printf("%d ", b[i]);
        i++;
    }
    return (0);
}