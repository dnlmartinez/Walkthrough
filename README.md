# Walkthrough


Walkthrough is a class that helps you create Walkthroughs for your iOS Apps. It differs from other similar classes in that there is no rigid template, is just a layer placed over your controllers that gives you complete freedom on the design of your views..

It is easy to add support for more providers.


Based on the [Library](https://github.com/n6xej/CSWXIBWalkThrough) created by Christopher Worley on 2/9/15 


## Getting Started:


### With CocoaPods

Walkthrough is available through CocoaPods. To install it, simply add the following line to your Podfile:

```
pod 'IT_Walkthrough'
```

and Run from Terminal in the root folder: 

```
pod install
```

Example:

### SWIFT
```
		// Get PodFile Bundle
		
		let frameworkBundle = Bundle(for: WalkThroughViewController.self)

		// Init Walkthrough ViewController

        let walkthrough: WalkThroughViewController = WalkThroughViewController.init(nibName: "WalkThroughViewController", bundle: frameworkBundle)
        walkthrough.reInitValues()
        

        // Localized Close Button Text 
        walkthrough.setCloseButtonTitle("Skip".localized())


        // Set Delegate on your ViewController
        walkthrough.delegate = self
        

        // Create the Custom Pages for the Walkthrough
        // Custom text, descriptions and images


        let page_1: WalkthroughPageViewController = WalkthroughPageViewController.init(nibName: "Walk_1", bundle: frameworkBundle)
        page_1.setTitle("Title 1".localized(), description: "Description 1".localized(), image: nil)
        
        
        let page_2: WalkthroughPageViewController = WalkthroughPageViewController.init(nibName: "Walk_2", bundle: frameworkBundle)
        page_2.setTitle("Title 2".localized(), description: "Description 2".localized(), image: nil)
        
        
        let page_3: WalkthroughPageViewController = WalkthroughPageViewController.init(nibName: "Walk_3", bundle: frameworkBundle)
        page_3.setTitle("Title 3".localized(), description: "Description 3".localized(), image: nil)
        


        // Added the pages to the View
        walkthrough.add(page_One)
        walkthrough.add(page_Two)
        walkthrough.add(page_Three)

        // Present Walkthrough 
        self.present(walkthrough, animated: true, completion: nil)

```





