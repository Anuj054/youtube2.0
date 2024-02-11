import { BrowserRouter,Routes,Route } from "react-router-dom"
import { Box } from "@mui/material"

 import { Navbar,Feed,VideoDetail,SearchFeed,ChannelDetail } from './components';


const App = () => 
  (
    <BrowserRouter>
     <box sx={{ backgroundColor: '#000'}}>
    < Navbar/>
    <Routes>
        <Route  exact path="/" element={<Feed />}/>
        <Route path="/video/:id" element={<VideoDetail/>}/>
        <Route path="/channel/:id" element={<ChannelDetail/>}/>
        <Route path="search/:searchTerm" element={<SearchFeed/>}/>
    </Routes>
     </box>
    </BrowserRouter>
  )


export default App;
