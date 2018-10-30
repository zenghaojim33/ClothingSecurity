//
//  CircleButton.swift
//  NXDrawKit
//
//  Created by Nicejinux on 2016. 7. 12..
//  Copyright © 2016년 Nicejinux. All rights reserved.
//

import UIKit

class CircleButton: UIButton
{
    @objc var color: UIColor!
    var opacity: CGFloat!
    var diameter: CGFloat!
    override var isSelected: Bool {
        willSet(selectedValue) {
            super.isSelected = selectedValue
            let isBright = self.color.isEqual(UIColor.white) || self.color.isEqual(UIColor.clear)
            let selectedColor = !self.isEnabled ? UIColor.clear : isBright ? UIColor.gray : UIColor.white
            self.layer.borderColor = self.isSelected ? selectedColor.cgColor : self.color?.cgColor
            
            if self.color.isEqual(UIColor.black) {
                self.layer.borderColor = UIColor.white.cgColor
            }
            self.layer.borderWidth = self.isSelected ? 3 : 1
        }
    }
    
    override var isEnabled: Bool {
        willSet(enabledValue) {
            super.isEnabled = enabledValue
            
            // if button is disabled, selected color should be changed to clear color
            let selected = self.isSelected
            self.isSelected = selected
        }
    }
    
    // MARK: - Public Methods
    @objc init(diameter: CGFloat, color: UIColor, opacity: CGFloat) {
        super.init(frame: CGRect(x: 0, y: 0, width: diameter, height: diameter))
        self.initialize(diameter, color: color, opacity: opacity)
    }
    
    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
    }

    @objc internal func update(_ color: UIColor) {
        self.color = color
        self.isSelected = super.isSelected
        self.backgroundColor = color.withAlphaComponent(self.opacity!)
    }

    // MARK: - Private Methods
    fileprivate func initialize(_ diameter: CGFloat, color: UIColor, opacity: CGFloat) {
        self.color = color
        self.opacity = opacity
        self.diameter = diameter
        
        self.layer.cornerRadius = diameter / 2.0
        self.layer.borderColor = color.cgColor
        self.layer.borderWidth = 1
        self.backgroundColor = color.withAlphaComponent(opacity)
        
        if self.color.isEqual(UIColor.clear) {
            self.setBackgroundImage(self.image("icon_eraser"), for: UIControl.State())
        }
        
        if self.color.isEqual(UIColor.black) {
           self.layer.borderColor = UIColor.white.cgColor
        }
    }
    
    fileprivate func image(_ name: String) -> UIImage? {
        return ImageNamed(name)
    }
}
