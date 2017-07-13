//
//  GetPrimaryMACAddress.h
//  Analytics
//
//  Created by Dev Team on 7/13/17.
//  Copyright © 2017 Segment. All rights reserved.
//

#if TARGET_OS_OSX

kern_return_t FindEthernetInterfaces(io_iterator_t *matchingServices);
kern_return_t GetMACAddress(io_iterator_t intfIterator, UInt8 *MACAddress, UInt8 bufferSize);

#endif
