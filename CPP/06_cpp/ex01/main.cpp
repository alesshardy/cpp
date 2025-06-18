/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:16:54 by apintus           #+#    #+#             */
/*   Updated: 2025/03/05 18:37:11 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// int main()
// {
//     //Create object Data
//     Data    ogData;
//     ogData.content = "SEEEYUH";

//     //Print object og Adress
//     std::cout << "Adress of the og Object: " << &ogData << std::endl;

//     //Serialization of the object Data
//     uintptr_t raw = Serializer::serialize(&ogData);
//     std::cout << "Value serialize (uintptr_t): " << raw << std::endl;

//     //Deserialization of the serialize value
//     Data*   deserializedData = Serializer::deserialize(raw);
//     std::cout << "Adress of the deserialized Object: " << deserializedData << std::endl;
    
//     //Check that adress of the deserialized Object is the same as the og Object
//     if (deserializedData == &ogData)
//     {
//         std::cout << "Succes: Adress are the Same!" << std::endl;
//         std::cout << "Content of the deserialized object: " << deserializedData->content << std::endl;   
//     }
//     else
//         std::cout << "Error: Adress of the object are not the same" << std::endl;
//     return (0);

// }

int main()
{
    // Créer un objet à sérialiser
    Data data;
    data.content = "42";
    // data.value2 = 42.42;
    // data.value3 = "Example";

    // Sérialiser l'objet
    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "Serialized data: " << raw << std::endl;

    // Désérialiser l'objet
    Data* deserializedData = Serializer::deserialize(raw);
    std::cout << "Deserialized data: " << deserializedData->content << std::endl;

    return (0);
}
