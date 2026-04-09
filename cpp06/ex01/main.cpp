/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emad <emad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 11:21:44 by imatouil          #+#    #+#             */
/*   Updated: 2026/04/08 21:52:52 by emad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"
#include "Data.hpp"

int	main(void)
{
	Data	data;

	data.id = 1337;
	data.login = "imatouil";
	Data	*serializePtr = &data;
	uintptr_t	raw = Serialize::serialize(serializePtr);
	Data	*deserializePtr = Serialize::deserialize(raw);

	std::cout << "Original pointer: " << serializePtr << std::endl;
    std::cout << "Serialized value: " << raw << std::endl;
    std::cout << "Deserialized pointer: " << deserializePtr << std::endl;
	
	if (serializePtr == deserializePtr)
        std::cout << "Success: pointers are equal!" << std::endl;
    else
        std::cout << "Error: pointers are NOT equal!" << std::endl;

    // Access data to prove it's valid
    std::cout << "ID: " << deserializePtr->id << std::endl;
    std::cout << "login: " << deserializePtr->login << std::endl;

    return 0;
}
