#
#  Be sure to run `pod spec lint IT_WalkThrough.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|


  s.name         = "IT_WalkThrough"

  s.version      = "1.0.1"
  
  s.summary      = "IT Portal WalkThrough"
  
  s.description  = "IT Portal WalkThrough"

  s.homepage     = "http:www.google.es"

  s.license      = "MIT"

  s.author             = { "" => "" }

  s.platform     = :ios
  
  s.ios.deployment_target = "11.0"
  
  s.source       = { :git => "https://repository.mpsa.com/cocoapods-psa/com/inetpsa/cd200/IT_WalkThrough.git", :tag => "#{s.version}" }
  
  s.source_files  = "IT_WalkThrough", "IT_WalkThrough/**/*.{h,m}"

  s.resources = "IT_WalkThrough/**/*.{xib,png}"


end
