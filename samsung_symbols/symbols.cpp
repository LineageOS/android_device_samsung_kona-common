/*
 * Copyright (C) 2016 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdlib.h>

// n5100-n5110
// Do not check libsec-ril.so protobuf version

// google::protobuf::internal::VerifyVersion(int, int, char const*)
extern "C" void _ZN6google8protobuf8internal13VerifyVersionEiiPKc();
extern "C" void _ZN6google8protobuf8internal13VerifyVersionEiiPKc(){}

// n5120
// missing symbol from stock libril.so

// android::Parcel::writeString16(char16_t const*, unsigned int)
extern "C" int _ZN7android6Parcel13writeString16EPKDsj();
// android::Parcel::writeString16(unsigned short const*, unsigned int)
extern "C" int _ZN7android6Parcel13writeString16EPKtj(){
	return _ZN7android6Parcel13writeString16EPKDsj();
}