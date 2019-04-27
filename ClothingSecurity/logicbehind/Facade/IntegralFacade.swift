//
//  IntegralFacade.swift
//  Labeauty
//
//  Created by 宋昌鹏 on 2019/4/27.
//  Copyright © 2019 scpUpCloud. All rights reserved.
//

import Foundation
import ReactiveSwift
import Result
import Mesh
import SwiftyJSON

class IntegralFacade: NSObject {
    @objc public static let shared = IntegralFacade()
    
    func bonusPoint() -> SignalProducer<WalletResponseData, NSError> {
        return WalletRecordPacket().send().on()
    }
    
    func walletLog(page: Int) -> SignalProducer<WalletLogResponseData, NSError> {
        return WalletLogPacket(page: page).send().on()
    }
    
    func sign() -> SignalProducer<WalletSignResponseData, NSError> {
        return WalletSignPacket().send().on()
    }
}
