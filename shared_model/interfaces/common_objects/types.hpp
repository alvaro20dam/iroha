/**
 * Copyright Soramitsu Co., Ltd. 2017 All Rights Reserved.
 * http://soramitsu.co.jp
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IROHA_SHARED_MODEL_TYPES_HPP
#define IROHA_SHARED_MODEL_TYPES_HPP

#include "crypto/hash.hpp"

namespace shared_model {
  namespace interface {
    namespace types {
      /// Type of account id
      using AccountIdType = std::string;

      /// Type of asset id
      using AssetIdType = std::string;

      /// Type of domain id
      using DomainIdType = std::string;

      /// Type of transaction hash
      using TransactionHashType = iroha::hash256_t;

      /// Type of transaction hashes
      using TransactionHashesType = std::vector<TransactionHashType>;

      /// Type of precision
      using PrecisionType = uint8_t;

      /// Type of role permissions
      using RolePermissionsType = std::vector<std::string>;

      /// Type of roles
      using RolesType = std::vector<std::string>;

      /// Type of keys
      using KeysType = std::vector<iroha::pubkey_t>;
    }  // namespace types
  }    // namespace interface
}  // namespace shared_model
#endif  // IROHA_SHARED_MODEL_TYPES_HPP
