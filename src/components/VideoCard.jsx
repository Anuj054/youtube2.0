import { Link } from "react-router-dom"; 

import { Typography ,Card,CardContent,CardMedia} from "@mui/material";
import { CheckCircle } from "@mui/icons-material";
import { demoThumbnailUrl,demoVideoTitle,demoVideoUrl,demoChannelTitle,demoChannelUrl } from "../utils/constants";
const VideoCard = ({video:{id:{ videoId},snippet }}) => {
  return (
    <div>
      Video
    </div>
  )
}

export default VideoCard;
